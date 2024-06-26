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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_DESCRIBEREGIONSRESULT_H_
#define ALIBABACLOUD_DMS_DG_MODEL_DESCRIBEREGIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-dg/Dms_dgExport.h>

namespace AlibabaCloud
{
	namespace Dms_dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_DG_EXPORT DescribeRegionsResult : public ServiceResult
			{
			public:
				struct Region
				{
					std::string regionId;
					std::string regionEndpoint;
					std::string localName;
				};


				DescribeRegionsResult();
				explicit DescribeRegionsResult(const std::string &payload);
				~DescribeRegionsResult();
				std::string getErrorMsg()const;
				std::vector<Region> getRegions()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				std::vector<Region> regions_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_DG_MODEL_DESCRIBEREGIONSRESULT_H_