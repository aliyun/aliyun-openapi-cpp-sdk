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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARTASKANDACTIONSRESULT_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARTASKANDACTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sophonsoar/SophonsoarExport.h>

namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		namespace Model
		{
			class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeSoarTaskAndActionsResult : public ServiceResult
			{
			public:
				struct Details
				{
					struct Action
					{
						std::string status;
						std::string triggerType;
						std::string action;
						std::string actionUuid;
						long endTime;
						std::string nodeName;
						long startTime;
						std::string taskUuid;
						std::string taskTenantId;
						std::string srcHostName;
						std::string taskStatus;
						std::string assetName;
						std::string triggerUser;
						std::string triggerDataId;
						std::string tenantId;
						std::string taskName;
						std::string dataSourceName;
						std::string nodeType;
						std::string taskType;
						std::string nodeId;
						std::string eventId;
						std::string component;
						std::string requestUuid;
					};
					std::string sao;
					std::string status;
					int all;
					std::string triggerType;
					long endTime;
					std::vector<Action> actions;
					std::string taskFlowMd5;
					long startTime;
					std::string taskUuid;
					std::string errorMsg;
					std::string taskTenantId;
					int actionLogNum;
					std::string resultMessage;
					int success;
					std::string triggerUser;
					std::string triggerDataId;
					std::string resultLevel;
					std::string resultDetailInfo;
					std::string taskName;
					std::string dataSourceName;
					std::string taskType;
					std::string requestUuid;
					std::string rawEventReq;
				};


				DescribeSoarTaskAndActionsResult();
				explicit DescribeSoarTaskAndActionsResult(const std::string &payload);
				~DescribeSoarTaskAndActionsResult();
				Details getDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				Details details_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARTASKANDACTIONSRESULT_H_