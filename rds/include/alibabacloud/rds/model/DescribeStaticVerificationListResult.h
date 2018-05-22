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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeStaticVerificationListResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string destinationDetail;
					std::string sourceDetail;
					std::string abnormalType;
				};


				DescribeStaticVerificationListResult();
				explicit DescribeStaticVerificationListResult(const std::string &payload);
				~DescribeStaticVerificationListResult();
				int getDestinationTableNumber()const;
				std::string getDestinationInstanceId()const;
				int getDestinationDBNumber()const;
				std::string getSourceInstanceId()const;
				int getSourceDBNumber()const;
				std::string getReplicaId()const;
				int getSourceDBSize()const;
				int getSourceCountNumber()const;
				int getDestinationCountNumber()const;
				std::string getConsistencyPercent()const;
				std::vector<ItemsItem> getItems()const;
				int getDestinationDBSize()const;
				int getSourceTableNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int destinationTableNumber_;
				std::string destinationInstanceId_;
				int destinationDBNumber_;
				std::string sourceInstanceId_;
				int sourceDBNumber_;
				std::string replicaId_;
				int sourceDBSize_;
				int sourceCountNumber_;
				int destinationCountNumber_;
				std::string consistencyPercent_;
				std::vector<ItemsItem> items_;
				int destinationDBSize_;
				int sourceTableNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTRESULT_H_