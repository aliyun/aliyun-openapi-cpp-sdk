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

#ifndef ALIBABACLOUD_EMR_MODEL_SEARCHLOGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_SEARCHLOGREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT SearchLogRequest : public RpcServiceRequest
			{

			public:
				SearchLogRequest();
				~SearchLogRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getLine()const;
				void setLine(int line);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getLogstoreName()const;
				void setLogstoreName(const std::string& logstoreName);
				int getFromTimestamp()const;
				void setFromTimestamp(int fromTimestamp);
				int getOffset()const;
				void setOffset(int offset);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getReverse()const;
				void setReverse(bool reverse);
				std::string getHostInnerIp()const;
				void setHostInnerIp(const std::string& hostInnerIp);
				int getToTimestamp()const;
				void setToTimestamp(int toTimestamp);
				std::string getSlsQueryString()const;
				void setSlsQueryString(const std::string& slsQueryString);

            private:
				long resourceOwnerId_;
				int line_;
				std::string accessKeyId_;
				std::string hostName_;
				std::string regionId_;
				std::string logstoreName_;
				int fromTimestamp_;
				int offset_;
				std::string clusterId_;
				bool reverse_;
				std::string hostInnerIp_;
				int toTimestamp_;
				std::string slsQueryString_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_SEARCHLOGREQUEST_H_