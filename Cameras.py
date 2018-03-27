
# David C,Dallas G,Christian B,Brandon O
# Rubics Cube Solver



import numpy
import cv2




cap = cv2.VideoCapture(0)      #Camera 1
cap1 = cv2.VideoCapture(1)     #Camera 2
cap2 = cv2.VideoCapture(2)     #Camera 3
cap3 = cv2.VideoCapture(3)     #Camera 4



out = cv2.VideoWriter('output.avi',-1, 20, (640,480))
                                         #(HORZ,VERT)

            
while(1):

    # reads the frames

    ret,frame  = cap.read()
    ret,frame1 = cap1.read()
    ret,frame2 = cap2.read()
    ret,frame3 = cap3.read()
    
    



        
  # ---CAMERA 1 TOP VIEW---                                  #Note cv2.line(frame,(First point Horz,Vert),(Second point), (Color Values) , (Line Thickness))



         # --OUTER Perimeter Dimensions--

    cv2.line(frame, (140,60) , (500,60) , (0,0,0) ,6)   #horizontal
    cv2.line(frame, (140,420) , (500,420) , (0,0,0) ,6)

    cv2.line(frame, (140,60) , (140,420) , (0,0,0) ,6)  #vertical
    cv2.line(frame, (500,60) , (500,420) , (0,0,0) ,6)

         # -- Inner Dimensions --

    cv2.line(frame, (140,186) , (500,186) , (0,0,0) ,6) # horizontal 126.6 spacing
    cv2.line(frame, (140,311) , (500,311) , (0,0,0) ,6)
    cv2.line(frame, (260,60) , (260,186) ,(0,0,0) ,6)   # vertical Left
    cv2.line(frame, (260,186) , (260,311) , (0,0,0) ,6) # vertical Left
    cv2.line(frame, (260,311) , (260,420) , (0,0,0) ,6) # vertical Left
    
    cv2.line(frame, (380,60) , (380,186) , (0,0,0) ,6)  # vertical Right
    cv2.line(frame, (380,186) , (380,311) , (0,0,0) ,6) # vertical Right
    cv2.line(frame, (380,311) , (380,420) , (0,0,0) ,6) # vertical Right


    # ---CAMERA 2 Bottom View---
    

      # --OUTER Perimeter Dimensions--

    cv2.line(frame1, (140,60) , (500,60) , (0,0,0) ,6)   #horizontal
    cv2.line(frame1, (140,420) , (500,420) , (0,0,0) ,6)

    cv2.line(frame1, (140,60) , (140,420) , (0,0,0) ,6) #vertical
    cv2.line(frame1, (500,60) , (500,420) , (0,0,0) ,6)

      # -- Inner Dimensions --

    cv2.line(frame1, (140,186) , (500,186) , (0,0,0) ,6) # horizontal 126.6 spacing
    cv2.line(frame1, (140,311) , (500,311) , (0,0,0) ,6) # horizontal
    cv2.line(frame1, (260,60) , (260,186) ,(0,0,0) ,6)   # vertical Left
    cv2.line(frame1, (260,186) , (260,311) , (0,0,0) ,6) # vertical Left
    cv2.line(frame1, (260,311) , (260,420) , (0,0,0) ,6) # vertical Left
    
    cv2.line(frame1, (380,60) , (380,186) , (0,0,0) ,6)  # vertical Right
    cv2.line(frame1, (380,186) , (380,311) , (0,0,0) ,6) # vertical Right
    cv2.line(frame1, (380,311) , (380,420) , (0,0,0) ,6) # vertical Right


    # ---CAMERA 3 Front side and Right Side View---

     

      # --OUTER Perimeter Dimensions--

    cv2.line(frame2, (125,85) , (515,85) , (0,0,0) ,9)   #horizontal
    cv2.line(frame2, (125,405) , (515,405) , (0,0,0) ,9)

    cv2.line(frame2, (125,85) , (125,405) , (0,0,0) ,9) #vertical
    cv2.line(frame2, (515,85) , (515,405) , (0,0,0) ,9)

       # -- Inner Dimensions --

    cv2.line(frame2, (320,85) , (320,405) ,(0,0,0) ,9)    # vertical Center

       # -- Front Side --
       
    cv2.line(frame2, (190,85) , (190,405) , (0,0,0) ,7)  # vertical Left
    cv2.line(frame2, (255,85) , (255,405) , (0,0,0) ,7)  # vertical Left
    
    cv2.line(frame2, (125,191) , (320,191) , (0,0,0) ,7) # horizontal Left 106.6 spacing
    cv2.line(frame2, (125,297) , (320,297) , (0,0,0) ,7) # horizontal Left
    

       #-- Right Side --

    cv2.line(frame2, (385,85) , (385,405) , (0,0,0) ,7)  # vertical Right
    cv2.line(frame2, (450,85) , (450,405) , (0,0,0) ,7)  # vertical Right
    
    cv2.line(frame2, (320,191) , (515,191) , (0,0,0) ,7)  # horizontal Right
    cv2.line(frame2, (320,297) , (515,297) , (0,0,0) ,7)  # horizontal Right



    # ---CAMERA 4 Back side and Left Side View---



      # --OUTER Perimeter Dimensions--

    cv2.line(frame3, (125,85) , (515,85) , (0,0,0) ,9)   #horizontal
    cv2.line(frame3, (125,405) , (515,405) , (0,0,0) ,9)

    cv2.line(frame3, (125,85) , (125,405) , (0,0,0) ,9) #vertical
    cv2.line(frame3, (515,85) , (515,405) , (0,0,0) ,9)

       # -- Inner Dimensions --


    cv2.line(frame3, (320,85) , (320,405) ,(0,0,0) ,9)    # vertical Center


       # -- Back Side --
       
    cv2.line(frame3, (190,85) , (190,405) , (0,0,0) ,7)  # vertical Left
    cv2.line(frame3, (255,85) , (255,405) , (0,0,0) ,7)  # vertical Left
    
    cv2.line(frame3, (125,191) , (320,191) , (0,0,0) ,7) # horizontal Left 106.6 spacing
    cv2.line(frame3, (125,297) , (320,297) , (0,0,0) ,7) # horizontal Left
    

       #-- Left Side --

    cv2.line(frame3, (385,85) , (385,405) , (0,0,0) ,7)  # vertical Right
    cv2.line(frame3, (450,85) , (450,405) , (0,0,0) ,7)  # vertical Right
    
    cv2.line(frame3, (320,191) , (515,191) , (0,0,0) ,7)  # horizontal Right
    cv2.line(frame3, (320,297) , (515,297) , (0,0,0) ,7)  # horizontal Right

#-------------------------------------------------------------------------------------------------------------------------#

    
    
    
    cv2.putText(frame,"Rubics Cube Solver by: Brandon,Christian,Dallas,David",  (9, 33),cv2.FONT_HERSHEY_COMPLEX_SMALL,.9,(0,0,0))
    cv2.putText(frame1, "Rubics Cube Solver by: Brandon,Christian,Dallas,David",(9, 33),cv2.FONT_HERSHEY_COMPLEX_SMALL,.9,(0,0,0))
    cv2.putText(frame2, "Rubics Cube Solver by: Brandon,Christian,Dallas,David",(9, 33),cv2.FONT_HERSHEY_COMPLEX_SMALL,.9,(0,0,0))
    cv2.putText(frame3, "Rubics Cube Solver by: Brandon,Christian,Dallas,David",(9, 33),cv2.FONT_HERSHEY_COMPLEX_SMALL,.9,(0,0,0))


    out.write(frame)
    out.write(frame1)
    #out.write(frame2)
    #out.write(frame3)
    

    cv2.imshow('0',frame)
    cv2.imshow('1',frame1)
    #cv2.imshow('2',frame2)
    #cv2.imshow('3',frame3)

    cv2.waitKey(33)
    
#---------------------------------------------------------------------------------------------------------------------------#

out.release()
cap.release()


cv2.destroyAllWindows()
