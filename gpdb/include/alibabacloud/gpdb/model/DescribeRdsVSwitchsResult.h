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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVSWITCHSRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVSWITCHSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeRdsVSwitchsResult : public ServiceResult
			{
			public:
				struct VSwitches
				{
					struct VSwitchItem
					{
						bool isDefault;
						std::string status;
						std::string izNo;
						std::string regionNo;
						std::string gmtCreate;
						std::string vSwitchId;
						std::string gmtModified;
						std::string cidrBlock;
						std::string vSwitchName;
						std::string bid;
						std::string aliUid;
					};
					std::vector<VSwitchItem> vSwitch;
				};


				DescribeRdsVSwitchsResult();
				explicit DescribeRdsVSwitchsResult(const std::string &payload);
				~DescribeRdsVSwitchsResult();
				VSwitches getVSwitches()const;

			protected:
				void parse(const std::string &payload);
			private:
				VSwitches vSwitches_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVSWITCHSRESULT_H_