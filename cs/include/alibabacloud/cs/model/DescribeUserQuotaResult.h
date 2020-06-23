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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBEUSERQUOTARESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBEUSERQUOTARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeUserQuotaResult : public ServiceResult
			{
			public:


				DescribeUserQuotaResult();
				explicit DescribeUserQuotaResult(const std::string &payload);
				~DescribeUserQuotaResult();
				int getNode_quota()const;
				int getAmk_cluster_quota()const;
				int getCluster_quota()const;
				int getAsk_cluster_quota()const;

			protected:
				void parse(const std::string &payload);
			private:
				int node_quota_;
				int amk_cluster_quota_;
				int cluster_quota_;
				int ask_cluster_quota_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBEUSERQUOTARESULT_H_