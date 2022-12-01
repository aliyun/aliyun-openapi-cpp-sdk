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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPGROUPRESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPGROUPRESULT_H_

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
			class ALIBABACLOUD_OPENSEARCH_EXPORT DescribeAppGroupResult : public ServiceResult
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
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					int secondRankAlgoDeploymentId;
					int firstRankAlgoDeploymentId;
					std::string description;
					std::string processingOrderId;
					std::string expireOn;
					std::string currentVersion;
					int switchedTime;
					int created;
					std::string name;
					int hasPendingQuotaReviewTask;
					std::string commodityCode;
					std::string status;
					int produced;
					int updated;
					std::string instanceId;
					std::string projectId;
					std::string lockMode;
					std::vector<TagsItem> tags;
					int chargingWay;
					std::string type;
					Quota quota;
					std::string chargeType;
					std::string id;
					std::string domain;
					int pendingSecondRankAlgoDeploymentId;
					int lockedByExpiration;
				};


				DescribeAppGroupResult();
				explicit DescribeAppGroupResult(const std::string &payload);
				~DescribeAppGroupResult();
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
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPGROUPRESULT_H_