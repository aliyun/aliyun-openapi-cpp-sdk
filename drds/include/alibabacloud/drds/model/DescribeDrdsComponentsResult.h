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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSCOMPONENTSRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSCOMPONENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsComponentsResult : public ServiceResult
			{
			public:
				struct DrdsComponent
				{
					struct DrdsAzoneInfo
					{
						bool supportVpc;
						std::string zoneName;
						std::string zoneId;
						bool supportClassic;
					};
					struct DrdsSeries
					{
						std::string series;
						std::string seriesName;
						std::vector<std::string> specs;
					};
					std::vector<DrdsComponent::DrdsAzoneInfo> drdsAzoneInfos;
					std::vector<std::string> mysqlVersions;
					std::string regionName;
					std::vector<DrdsComponent::DrdsSeries> drdsSeriesList;
					std::string regionId;
				};


				DescribeDrdsComponentsResult();
				explicit DescribeDrdsComponentsResult(const std::string &payload);
				~DescribeDrdsComponentsResult();
				std::vector<DrdsComponent> getDrdsComponents()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DrdsComponent> drdsComponents_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSCOMPONENTSRESULT_H_