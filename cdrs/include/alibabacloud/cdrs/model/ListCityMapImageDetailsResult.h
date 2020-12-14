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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPIMAGEDETAILSRESULT_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPIMAGEDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT ListCityMapImageDetailsResult : public ServiceResult
			{
			public:
				struct Datas
				{
					std::string personTargetImageStoragePath;
					std::string rightBottomX;
					std::string rightBottomY;
					std::string gender;
					std::string vehicleClass;
					std::string genderCodeReliability;
					std::string coatColorReliability;
					std::string recordId;
					std::string vehicleColorReliability;
					std::string trousersColor;
					std::string ageCodeReliability;
					std::string faceTargetImageStoragePath;
					std::string sourceImageStoragePath;
					std::string ageLowerLimit;
					std::string motorTargetImageStoragePath;
					std::string trousersColorReliability;
					std::string leftTopY;
					std::string leftTopX;
					std::string ageUpLimit;
					std::string vehicleColor;
					std::string vehicleClassReliability;
					std::string ageLowerLimitReliability;
					std::string coatColor;
					std::string shotTime;
					std::string dataSourceId;
				};


				ListCityMapImageDetailsResult();
				explicit ListCityMapImageDetailsResult(const std::string &payload);
				~ListCityMapImageDetailsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Datas> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				long pageSize_;
				long pageNumber_;
				std::vector<Datas> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPIMAGEDETAILSRESULT_H_