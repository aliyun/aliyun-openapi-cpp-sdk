/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_SCREENCHESTCTRESULT_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_SCREENCHESTCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT ScreenChestCTResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct LungNodule
					{
						struct Serie
						{
							struct Element
							{
								float imageZ;
								float imageY;
								std::string lobe;
								float imageX;
								std::string category;
								std::string lung;
								float meanValue;
								float confidence;
								float volume;
								float x;
								float y;
								float z;
								std::string sOPInstanceUID;
								float diameter;
							};
							std::vector<std::string> origin;
							std::string report;
							std::vector<std::string> spacing;
							std::vector<Serie::Element> elements;
							std::string seriesInstanceUid;
						};
						std::vector<Serie> series;
					};
					struct CACS
					{
						std::string score;
						std::string resultUrl;
					};
					struct Covid
					{
						std::string newProbability;
						std::string otherProbability;
						std::string normalProbability;
						std::string mask;
						std::string lesionRatio;
					};
					struct DetectRibFracture
					{
						struct DetectionsItem
						{
							float fractureConfidence;
							long fractureCategory;
							std::vector<std::string> coordinateImage;
							std::vector<std::string> coordinates;
							std::string fractureLocation;
							long fractureSegment;
							long fractureId;
						};
						std::vector<std::string> origin2;
						std::vector<std::string> spacing1;
						std::vector<DetectionsItem> detections;
						std::string resultURL;
					};
					struct AnalyzeChestVessel
					{
						struct AortaInfo
						{
							float maxArea;
							std::vector<std::string> area;
							float maxDiameter;
							long labelValue;
							std::vector<std::string> coordinates3;
							long maxAreaIndex;
						};
						struct PulmonaryInfo
						{
							float maxArea;
							std::vector<std::string> area5;
							float maxDiameter;
							long labelValue;
							std::vector<std::string> coordinates4;
							long maxAreaIndex;
							float nearestAortaArea;
						};
						PulmonaryInfo pulmonaryInfo;
						AortaInfo aortaInfo;
						std::string resultURL;
					};
					LungNodule lungNodule;
					CACS cACS;
					Covid covid;
					AnalyzeChestVessel analyzeChestVessel;
					DetectRibFracture detectRibFracture;
					std::string errorMessage;
				};


				ScreenChestCTResult();
				explicit ScreenChestCTResult(const std::string &payload);
				~ScreenChestCTResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_SCREENCHESTCTRESULT_H_