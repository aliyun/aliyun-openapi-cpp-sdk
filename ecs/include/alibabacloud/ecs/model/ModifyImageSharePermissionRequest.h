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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifyImageSharePermissionRequest : public EcsRequest
			{

			public:
				ModifyImageSharePermissionRequest();
				~ModifyImageSharePermissionRequest();

				std::string getAddAccount1()const;
				void setAddAccount1(const std::string& addAccount1);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAddAccount9()const;
				void setAddAccount9(const std::string& addAccount9);
				std::string getAddAccount8()const;
				void setAddAccount8(const std::string& addAccount8);
				std::string getAddAccount7()const;
				void setAddAccount7(const std::string& addAccount7);
				std::string getAddAccount6()const;
				void setAddAccount6(const std::string& addAccount6);
				std::string getAddAccount5()const;
				void setAddAccount5(const std::string& addAccount5);
				std::string getAddAccount10()const;
				void setAddAccount10(const std::string& addAccount10);
				std::string getAddAccount4()const;
				void setAddAccount4(const std::string& addAccount4);
				std::string getAddAccount3()const;
				void setAddAccount3(const std::string& addAccount3);
				std::string getAddAccount2()const;
				void setAddAccount2(const std::string& addAccount2);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getRemoveAccount1()const;
				void setRemoveAccount1(const std::string& removeAccount1);
				std::string getRemoveAccount2()const;
				void setRemoveAccount2(const std::string& removeAccount2);
				std::string getRemoveAccount3()const;
				void setRemoveAccount3(const std::string& removeAccount3);
				std::string getRemoveAccount4()const;
				void setRemoveAccount4(const std::string& removeAccount4);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRemoveAccount9()const;
				void setRemoveAccount9(const std::string& removeAccount9);
				std::string getRemoveAccount5()const;
				void setRemoveAccount5(const std::string& removeAccount5);
				std::string getRemoveAccount6()const;
				void setRemoveAccount6(const std::string& removeAccount6);
				std::string getRemoveAccount7()const;
				void setRemoveAccount7(const std::string& removeAccount7);
				std::string getRemoveAccount8()const;
				void setRemoveAccount8(const std::string& removeAccount8);
				std::string getRemoveAccount10()const;
				void setRemoveAccount10(const std::string& removeAccount10);

            private:
				std::string addAccount1_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string regionId_;
				std::string addAccount9_;
				std::string addAccount8_;
				std::string addAccount7_;
				std::string addAccount6_;
				std::string addAccount5_;
				std::string addAccount10_;
				std::string addAccount4_;
				std::string addAccount3_;
				std::string addAccount2_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string removeAccount1_;
				std::string removeAccount2_;
				std::string removeAccount3_;
				std::string removeAccount4_;
				long ownerId_;
				std::string removeAccount9_;
				std::string removeAccount5_;
				std::string removeAccount6_;
				std::string removeAccount7_;
				std::string removeAccount8_;
				std::string removeAccount10_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_