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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATESAGLINKLEVELHAREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATESAGLINKLEVELHAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT CreateSAGLinkLevelHaRequest : public RpcServiceRequest
			{

			public:
				CreateSAGLinkLevelHaRequest();
				~CreateSAGLinkLevelHaRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBackupLinkId()const;
				void setBackupLinkId(const std::string& backupLinkId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getHaType()const;
				void setHaType(const std::string& haType);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getMainLinkRegionId()const;
				void setMainLinkRegionId(const std::string& mainLinkRegionId);
				std::string getSmartAGId()const;
				void setSmartAGId(const std::string& smartAGId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMainLinkId()const;
				void setMainLinkId(const std::string& mainLinkId);
				std::string getBackupLinkRegionId()const;
				void setBackupLinkRegionId(const std::string& backupLinkRegionId);

            private:
				long resourceOwnerId_;
				std::string backupLinkId_;
				std::string resourceOwnerAccount_;
				std::string haType_;
				std::string ownerAccount_;
				std::string mainLinkRegionId_;
				std::string smartAGId_;
				long ownerId_;
				std::string mainLinkId_;
				std::string backupLinkRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATESAGLINKLEVELHAREQUEST_H_