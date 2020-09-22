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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMURLREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMURLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeStreamURLRequest : public RpcServiceRequest
			{

			public:
				DescribeStreamURLRequest();
				~DescribeStreamURLRequest();

				std::string getAuthKey()const;
				void setAuthKey(const std::string& authKey);
				bool getAuth()const;
				void setAuth(bool auth);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getOutHostType()const;
				void setOutHostType(const std::string& outHostType);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getOutProtocol()const;
				void setOutProtocol(const std::string& outProtocol);
				std::string getTranscode()const;
				void setTranscode(const std::string& transcode);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getExpire()const;
				void setExpire(long expire);
				std::string getLocation()const;
				void setLocation(const std::string& location);

            private:
				std::string authKey_;
				bool auth_;
				long startTime_;
				std::string type_;
				std::string outHostType_;
				std::string id_;
				std::string showLog_;
				std::string outProtocol_;
				std::string transcode_;
				long endTime_;
				long ownerId_;
				long expire_;
				std::string location_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMURLREQUEST_H_