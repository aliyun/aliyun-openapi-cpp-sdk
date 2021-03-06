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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETAGENTRESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_GETAGENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetAgentResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct GroupListItem
					{
						std::string description;
						std::string displayName;
						long skillGroupId;
						int channelType;
						std::string name;
					};
					int status;
					long tenantId;
					std::vector<GroupListItem> groupList;
					std::string displayName;
					long agentId;
					std::string accountName;
				};


				GetAgentResult();
				explicit GetAgentResult(const std::string &payload);
				~GetAgentResult();
				std::string getMessage()const;
				long getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETAGENTRESULT_H_