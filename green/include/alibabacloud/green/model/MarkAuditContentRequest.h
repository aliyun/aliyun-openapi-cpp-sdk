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

#ifndef ALIBABACLOUD_GREEN_MODEL_MARKAUDITCONTENTREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_MARKAUDITCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT MarkAuditContentRequest : public RpcServiceRequest
			{

			public:
				MarkAuditContentRequest();
				~MarkAuditContentRequest();

				std::string getBizTypes()const;
				void setBizTypes(const std::string& bizTypes);
				std::string getAuditIllegalReasons()const;
				void setAuditIllegalReasons(const std::string& auditIllegalReasons);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getAuditResult()const;
				void setAuditResult(const std::string& auditResult);
				std::string getIds()const;
				void setIds(const std::string& ids);

            private:
				std::string bizTypes_;
				std::string auditIllegalReasons_;
				std::string sourceIp_;
				std::string auditResult_;
				std::string ids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_MARKAUDITCONTENTREQUEST_H_