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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBSHELLREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBSHELLREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeWebshellRequest : public RpcServiceRequest
			{

			public:
				DescribeWebshellRequest();
				~DescribeWebshellRequest();

				int getGroupId()const;
				void setGroupId(int groupId);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getTag()const;
				void setTag(int tag);

            private:
				int groupId_;
				std::string remark_;
				std::string dealed_;
				std::string sourceIp_;
				int tag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBSHELLREQUEST_H_