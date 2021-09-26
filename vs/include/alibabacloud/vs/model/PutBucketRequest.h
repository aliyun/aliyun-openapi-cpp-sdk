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

#ifndef ALIBABACLOUD_VS_MODEL_PUTBUCKETREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_PUTBUCKETREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT PutBucketRequest : public RpcServiceRequest
			{

			public:
				PutBucketRequest();
				~PutBucketRequest();

				std::string getDataRedundancyType()const;
				void setDataRedundancyType(const std::string& dataRedundancyType);
				std::string getEndpoint()const;
				void setEndpoint(const std::string& endpoint);
				std::string getBucketName()const;
				void setBucketName(const std::string& bucketName);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getBucketAcl()const;
				void setBucketAcl(const std::string& bucketAcl);
				std::string getDispatcherType()const;
				void setDispatcherType(const std::string& dispatcherType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getStorageClass()const;
				void setStorageClass(const std::string& storageClass);
				std::string getComment()const;
				void setComment(const std::string& comment);

            private:
				std::string dataRedundancyType_;
				std::string endpoint_;
				std::string bucketName_;
				std::string showLog_;
				std::string bucketAcl_;
				std::string dispatcherType_;
				long ownerId_;
				std::string resourceType_;
				std::string storageClass_;
				std::string comment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_PUTBUCKETREQUEST_H_