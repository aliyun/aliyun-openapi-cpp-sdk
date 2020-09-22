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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICEURLREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICEURLREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribeDeviceURLRequest : public RpcServiceRequest
			{

			public:
				DescribeDeviceURLRequest();
				~DescribeDeviceURLRequest();

				bool getAuth()const;
				void setAuth(bool auth);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getStream()const;
				void setStream(const std::string& stream);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getOutProtocol()const;
				void setOutProtocol(const std::string& outProtocol);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getExpire()const;
				void setExpire(long expire);

            private:
				bool auth_;
				std::string type_;
				std::string mode_;
				std::string stream_;
				std::string id_;
				std::string showLog_;
				std::string outProtocol_;
				long ownerId_;
				long expire_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICEURLREQUEST_H_