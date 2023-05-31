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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLIVERSTEATOSISRESULT_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLIVERSTEATOSISRESULT_H_

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
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectLiverSteatosisResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DetectionsItem
					{
						long radius;
						float liverSpleenDifference;
						float liverSlice;
						float liverHU;
						std::string prediction;
						float probability;
						float spleenHU;
						std::vector<std::string> spleenCenter;
						float liverSpleenRatio;
						float spleenVolume;
						std::vector<std::string> rOI2Center;
						std::vector<std::string> rOI3Center;
						float spleenSlice;
						float liverROI1;
						std::vector<std::string> rOI1Center;
						float liverVolume;
						float spleenROI;
						float liverROI2;
						float liverROI3;
					};
					std::vector<std::string> origin;
					std::vector<std::string> spacing;
					std::vector<DetectionsItem> detections;
				};


				DetectLiverSteatosisResult();
				explicit DetectLiverSteatosisResult(const std::string &payload);
				~DetectLiverSteatosisResult();
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
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLIVERSTEATOSISRESULT_H_