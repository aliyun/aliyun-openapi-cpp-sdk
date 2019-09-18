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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveApConfigRequest : public RpcServiceRequest
			{

			public:
				SaveApConfigRequest();
				~SaveApConfigRequest();

				std::string getCountry()const;
				void setCountry(const std::string& country);
				int getScan()const;
				void setScan(int scan);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getDai()const;
				void setDai(const std::string& dai);
				std::string getLogIp()const;
				void setLogIp(const std::string& logIp);
				std::string getMac()const;
				void setMac(const std::string& mac);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getApAssetId()const;
				void setApAssetId(long apAssetId);
				int getLogLevel()const;
				void setLogLevel(int logLevel);
				std::string getName()const;
				void setName(const std::string& name);
				int getEchoInt()const;
				void setEchoInt(int echoInt);
				long getId()const;
				void setId(long id);

            private:
				std::string country_;
				int scan_;
				std::string description_;
				std::string dai_;
				std::string logIp_;
				std::string mac_;
				std::string accessKeyId_;
				long apAssetId_;
				int logLevel_;
				std::string name_;
				int echoInt_;
				long id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPCONFIGREQUEST_H_