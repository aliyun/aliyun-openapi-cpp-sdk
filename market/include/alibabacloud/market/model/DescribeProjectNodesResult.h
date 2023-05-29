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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTNODESRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTNODESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeProjectNodesResult : public ServiceResult
			{
			public:
				struct ProjectNode
				{
					long gmtStart;
					bool needAttachment;
					std::string nodeName;
					std::string templateForm;
					bool autoFinishNode;
					long gmtFinished;
					long gmtExpired;
					bool allowRollbackNode;
					int finalStepNo;
					long nextNodeId;
					std::string operatorRole;
					long nodeId;
					int stepNo;
					long previousNodeId;
					std::string nodeStatus;
					long parentNodeId;
				};


				DescribeProjectNodesResult();
				explicit DescribeProjectNodesResult(const std::string &payload);
				~DescribeProjectNodesResult();
				bool getSuccess()const;
				std::vector<ProjectNode> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				std::vector<ProjectNode> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTNODESRESULT_H_