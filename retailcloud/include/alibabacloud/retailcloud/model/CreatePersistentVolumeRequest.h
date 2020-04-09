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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEPERSISTENTVOLUMEREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEPERSISTENTVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreatePersistentVolumeRequest : public RpcServiceRequest
			{

			public:
				CreatePersistentVolumeRequest();
				~CreatePersistentVolumeRequest();

				std::string getReclaimPolicy()const;
				void setReclaimPolicy(const std::string& reclaimPolicy);
				std::string getNFSVersion()const;
				void setNFSVersion(const std::string& nFSVersion);
				std::string getAccessModes()const;
				void setAccessModes(const std::string& accessModes);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getMountTargetDomain()const;
				void setMountTargetDomain(const std::string& mountTargetDomain);
				std::string getMountDir()const;
				void setMountDir(const std::string& mountDir);
				std::string getClusterInstanceId()const;
				void setClusterInstanceId(const std::string& clusterInstanceId);
				std::string getCapacity()const;
				void setCapacity(const std::string& capacity);
				std::string getStorageClass()const;
				void setStorageClass(const std::string& storageClass);

            private:
				std::string reclaimPolicy_;
				std::string nFSVersion_;
				std::string accessModes_;
				std::string name_;
				std::string mountTargetDomain_;
				std::string mountDir_;
				std::string clusterInstanceId_;
				std::string capacity_;
				std::string storageClass_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEPERSISTENTVOLUMEREQUEST_H_