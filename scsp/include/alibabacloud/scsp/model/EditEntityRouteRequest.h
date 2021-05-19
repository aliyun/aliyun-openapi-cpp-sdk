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

#ifndef ALIBABACLOUD_SCSP_MODEL_EDITENTITYROUTEREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_EDITENTITYROUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT EditEntityRouteRequest : public RpcServiceRequest
			{

			public:
				EditEntityRouteRequest();
				~EditEntityRouteRequest();

				std::string getExtInfo()const;
				void setExtInfo(const std::string& extInfo);
				std::string getDepartmentId()const;
				void setDepartmentId(const std::string& departmentId);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getEntityName()const;
				void setEntityName(const std::string& entityName);
				std::string getEntityId()const;
				void setEntityId(const std::string& entityId);
				std::string getEntityBizCodeType()const;
				void setEntityBizCodeType(const std::string& entityBizCodeType);
				std::string getEntityBizCode()const;
				void setEntityBizCode(const std::string& entityBizCode);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getEntityRelationNumber()const;
				void setEntityRelationNumber(const std::string& entityRelationNumber);
				long getServiceId()const;
				void setServiceId(long serviceId);
				long getUniqueId()const;
				void setUniqueId(long uniqueId);

            private:
				std::string extInfo_;
				std::string departmentId_;
				long groupId_;
				std::string entityName_;
				std::string entityId_;
				std::string entityBizCodeType_;
				std::string entityBizCode_;
				std::string instanceId_;
				std::string entityRelationNumber_;
				long serviceId_;
				long uniqueId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_EDITENTITYROUTEREQUEST_H_