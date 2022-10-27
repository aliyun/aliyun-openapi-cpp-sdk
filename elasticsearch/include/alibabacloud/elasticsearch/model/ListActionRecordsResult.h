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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListActionRecordsResult : public ServiceResult
			{
			public:
				struct ActionRecord
				{
					struct StatusInfoItem
					{
						struct SubStatusInfoItem
						{
							int nodeCount;
							long endTime;
							std::string stateType;
							long latencyMills;
							long startTime;
							std::string process;
							std::string subState;
							int completeNodeCount;
							std::string exception;
						};
						int nodeCount;
						long endTime;
						std::string stateType;
						long latencyMills;
						long startTime;
						std::string process;
						std::string subState;
						int completeNodeCount;
						std::vector<StatusInfoItem::SubStatusInfoItem> subStatusInfo;
						std::string exception;
					};
					long endTime;
					std::string requestId;
					std::string instanceId;
					long startTime;
					std::string process;
					std::string userInfo;
					std::string metaOld;
					std::vector<std::string> recordIds;
					std::string recordDiff;
					std::string actionName;
					std::string ownerId;
					std::vector<ActionRecord::StatusInfoItem> statusInfo;
					std::string stateType;
					std::string userId;
					std::string actionParams;
					std::string metaNow;
					std::vector<std::string> actionResultAccessList;
					std::string userType;
				};


				ListActionRecordsResult();
				explicit ListActionRecordsResult(const std::string &payload);
				~ListActionRecordsResult();
				std::vector<ActionRecord> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ActionRecord> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSRESULT_H_