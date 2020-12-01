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

#ifndef ALIBABACLOUD_CCC_MODEL_ADDPHONETAGSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_ADDPHONETAGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT AddPhoneTagsRequest : public RpcServiceRequest
			{

			public:
				AddPhoneTagsRequest();
				~AddPhoneTagsRequest();

				std::string getRegionNameProvince()const;
				void setRegionNameProvince(const std::string& regionNameProvince);
				int getType()const;
				void setType(int type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getConcurrency()const;
				void setConcurrency(int concurrency);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getProvider()const;
				void setProvider(const std::string& provider);
				std::vector<std::string> getPhoneNumberList()const;
				void setPhoneNumberList(const std::vector<std::string>& phoneNumberList);
				std::string getServiceTag()const;
				void setServiceTag(const std::string& serviceTag);
				std::string getSipTag()const;
				void setSipTag(const std::string& sipTag);
				std::string getRegionNameCity()const;
				void setRegionNameCity(const std::string& regionNameCity);

            private:
				std::string regionNameProvince_;
				int type_;
				std::string accessKeyId_;
				int concurrency_;
				std::string instanceId_;
				std::string provider_;
				std::vector<std::string> phoneNumberList_;
				std::string serviceTag_;
				std::string sipTag_;
				std::string regionNameCity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_ADDPHONETAGSREQUEST_H_