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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETENTITYROUTELISTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETENTITYROUTELISTREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT GetEntityRouteListRequest : public RpcServiceRequest
			{

			public:
				GetEntityRouteListRequest();
				~GetEntityRouteListRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getPageNo()const;
				void setPageNo(int pageNo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getEntityName()const;
				void setEntityName(const std::string& entityName);
				std::string getEntityRelationNumber()const;
				void setEntityRelationNumber(const std::string& entityRelationNumber);

            private:
				std::string instanceId_;
				int pageNo_;
				int pageSize_;
				std::string entityName_;
				std::string entityRelationNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETENTITYROUTELISTREQUEST_H_