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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSCLUSTERSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeGWSClustersResult : public ServiceResult
			{
			public:
				struct ClusterInfo
				{
					std::string status;
					int instanceCount;
					std::string vpcId;
					std::string clusterId;
					std::string createTime;
				};


				DescribeGWSClustersResult();
				explicit DescribeGWSClustersResult(const std::string &payload);
				~DescribeGWSClustersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ClusterInfo> getClusters()const;
				std::string getCallerType()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ClusterInfo> clusters_;
				std::string callerType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSCLUSTERSRESULT_H_