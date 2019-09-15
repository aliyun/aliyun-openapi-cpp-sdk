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

#ifndef ALIBABACLOUD_AEGIS_MODEL_OPERATEVULREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_OPERATEVULREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT OperateVulRequest : public RpcServiceRequest
			{

			public:
				OperateVulRequest();
				~OperateVulRequest();

				std::string getReason()const;
				void setReason(const std::string& reason);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getOperateType()const;
				void setOperateType(const std::string& operateType);
				std::string getInfo()const;
				void setInfo(const std::string& info);

            private:
				std::string reason_;
				std::string type_;
				std::string sourceIp_;
				std::string operateType_;
				std::string info_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_OPERATEVULREQUEST_H_