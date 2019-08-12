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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTKAFKATOPICSTATISTICSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTKAFKATOPICSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListKafkaTopicStatisticsRequest : public RpcServiceRequest
			{

			public:
				ListKafkaTopicStatisticsRequest();
				~ListKafkaTopicStatisticsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getActiveOnly()const;
				void setActiveOnly(bool activeOnly);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDataSourceId()const;
				void setDataSourceId(const std::string& dataSourceId);
				std::string getTopicName()const;
				void setTopicName(const std::string& topicName);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFuzzyTopicName()const;
				void setFuzzyTopicName(const std::string& fuzzyTopicName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				bool activeOnly_;
				std::string regionId_;
				int pageSize_;
				std::string dataSourceId_;
				std::string topicName_;
				std::string clusterId_;
				int pageNumber_;
				std::string fuzzyTopicName_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTKAFKATOPICSTATISTICSREQUEST_H_