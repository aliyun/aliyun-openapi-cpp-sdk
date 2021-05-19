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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETTAGLISTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETTAGLISTREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT GetTagListRequest : public RpcServiceRequest
			{

			public:
				GetTagListRequest();
				~GetTagListRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getEntityType()const;
				void setEntityType(const std::string& entityType);
				std::string getEntityId()const;
				void setEntityId(const std::string& entityId);

            private:
				std::string instanceId_;
				std::string entityType_;
				std::string entityId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETTAGLISTREQUEST_H_