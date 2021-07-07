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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTPOPLOCATIONSRESULT_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTPOPLOCATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT DescribeAnycastPopLocationsResult : public ServiceResult
			{
			public:
				struct AnycastPopLocation
				{
					std::string regionName;
					std::string regionId;
				};


				DescribeAnycastPopLocationsResult();
				explicit DescribeAnycastPopLocationsResult(const std::string &payload);
				~DescribeAnycastPopLocationsResult();
				std::vector<AnycastPopLocation> getAnycastPopLocationList()const;
				std::string getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AnycastPopLocation> anycastPopLocationList_;
				std::string count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTPOPLOCATIONSRESULT_H_