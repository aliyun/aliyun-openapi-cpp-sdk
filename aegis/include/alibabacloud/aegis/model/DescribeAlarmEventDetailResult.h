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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTDETAILRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAlarmEventDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct CauseDetail
					{
						struct ValueItem
						{
							std::string type;
							std::string value;
							std::string name;
						};
						std::vector<CauseDetail::ValueItem> value;
						std::string key;
					};
					bool canCancelFault;
					long endTime;
					std::vector<CauseDetail> causeDetails;
					long startTime;
					std::string accessCode;
					std::string intranetIp;
					bool hasTraceInfo;
					bool dealed;
					std::string dataSource;
					std::string instanceName;
					std::string type;
					bool canBeDealOnLine;
					std::string uuid;
					std::string internetIp;
					std::string alarmEventDesc;
					std::string alarmUniqueInfo;
					std::string level;
					std::string alarmEventAliasName;
					std::string solution;
				};


				DescribeAlarmEventDetailResult();
				explicit DescribeAlarmEventDetailResult(const std::string &payload);
				~DescribeAlarmEventDetailResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTDETAILRESULT_H_