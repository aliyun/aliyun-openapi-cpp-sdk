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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_MODIFYAPPGROUPQUOTARESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_MODIFYAPPGROUPQUOTARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT ModifyAppGroupQuotaResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Quota
					{
						int docSize;
						int computeResource;
						std::string spec;
					};
					std::string status;
					int secondRankAlgoDeploymentId;
					int firstRankAlgoDeploymentId;
					int produced;
					std::string description;
					int updated;
					std::string processingOrderId;
					std::string instanceId;
					std::string expireOn;
					std::string currentVersion;
					std::string projectId;
					int switchedTime;
					std::string lockMode;
					int created;
					int chargingWay;
					std::string name;
					std::string type;
					Quota quota;
					std::string chargeType;
					int hasPendingQuotaReviewTask;
					std::string commodityCode;
					std::string id;
					int pendingSecondRankAlgoDeploymentId;
					int lockedByExpiration;
				};


				ModifyAppGroupQuotaResult();
				explicit ModifyAppGroupQuotaResult(const std::string &payload);
				~ModifyAppGroupQuotaResult();
				std::string getRequestId()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_MODIFYAPPGROUPQUOTARESULT_H_