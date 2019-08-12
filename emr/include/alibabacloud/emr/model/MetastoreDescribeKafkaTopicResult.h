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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKATOPICRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKATOPICRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeKafkaTopicResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					std::string clusterBizId;
					std::string clusterName;
					std::string clusterStatus;
				};
				struct AdvancedConfig
				{
					std::string value;
					std::string key;
				};
				struct Summary
				{
					std::string value;
					std::string key;
				};
				struct Distribution
				{
					int partition;
					bool preferredLeader;
					int leader;
					std::vector<std::string> replicaList;
					bool underReplicated;
					std::vector<std::string> isrList;
					long logEndOffset;
					long offset;
				};


				MetastoreDescribeKafkaTopicResult();
				explicit MetastoreDescribeKafkaTopicResult(const std::string &payload);
				~MetastoreDescribeKafkaTopicResult();
				std::string getStatus()const;
				std::vector<AdvancedConfig> getAdvancedConfigList()const;
				int getReplicationFactor()const;
				std::string getReassignId()const;
				std::vector<Summary> getSummaryList()const;
				long getGmtModified()const;
				Cluster getCluster()const;
				std::string getPreferredReplicasPercentage()const;
				int getBrokerTotal()const;
				std::string getTopicName()const;
				std::string getUnderReplicatedPercentage()const;
				long getGmtCreate()const;
				std::string getBrokersLeaderSkewPercentage()const;
				int getNumUsingBrokers()const;
				int getNumPartitions()const;
				std::string getId()const;
				std::string getDataSourceId()const;
				std::vector<Distribution> getDistributionList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::vector<AdvancedConfig> advancedConfigList_;
				int replicationFactor_;
				std::string reassignId_;
				std::vector<Summary> summaryList_;
				long gmtModified_;
				Cluster cluster_;
				std::string preferredReplicasPercentage_;
				int brokerTotal_;
				std::string topicName_;
				std::string underReplicatedPercentage_;
				long gmtCreate_;
				std::string brokersLeaderSkewPercentage_;
				int numUsingBrokers_;
				int numPartitions_;
				std::string id_;
				std::string dataSourceId_;
				std::vector<Distribution> distributionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKATOPICRESULT_H_