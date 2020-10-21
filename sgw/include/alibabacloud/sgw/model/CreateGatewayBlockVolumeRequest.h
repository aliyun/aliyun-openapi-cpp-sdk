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

#ifndef ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYBLOCKVOLUMEREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYBLOCKVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT CreateGatewayBlockVolumeRequest : public RpcServiceRequest
			{

			public:
				CreateGatewayBlockVolumeRequest();
				~CreateGatewayBlockVolumeRequest();

				std::string getOssEndpoint()const;
				void setOssEndpoint(const std::string& ossEndpoint);
				bool getRecovery()const;
				void setRecovery(bool recovery);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getChunkSize()const;
				void setChunkSize(int chunkSize);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);
				std::string getVolumeProtocol()const;
				void setVolumeProtocol(const std::string& volumeProtocol);
				bool getChapEnabled()const;
				void setChapEnabled(bool chapEnabled);
				std::string getCacheMode()const;
				void setCacheMode(const std::string& cacheMode);
				std::string getLocalFilePath()const;
				void setLocalFilePath(const std::string& localFilePath);
				bool getOssBucketSsl()const;
				void setOssBucketSsl(bool ossBucketSsl);
				long getSize()const;
				void setSize(long size);
				std::string getChapInUser()const;
				void setChapInUser(const std::string& chapInUser);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getOssBucketName()const;
				void setOssBucketName(const std::string& ossBucketName);
				std::string getChapInPassword()const;
				void setChapInPassword(const std::string& chapInPassword);

            private:
				std::string ossEndpoint_;
				bool recovery_;
				std::string accessKeyId_;
				std::string securityToken_;
				int chunkSize_;
				std::string gatewayId_;
				std::string volumeProtocol_;
				bool chapEnabled_;
				std::string cacheMode_;
				std::string localFilePath_;
				bool ossBucketSsl_;
				long size_;
				std::string chapInUser_;
				std::string name_;
				std::string ossBucketName_;
				std::string chapInPassword_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_CREATEGATEWAYBLOCKVOLUMEREQUEST_H_