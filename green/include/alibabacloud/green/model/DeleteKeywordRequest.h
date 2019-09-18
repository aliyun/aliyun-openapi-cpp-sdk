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

#ifndef ALIBABACLOUD_GREEN_MODEL_DELETEKEYWORDREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_DELETEKEYWORDREQUEST_H_

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
			class ALIBABACLOUD_GREEN_EXPORT DeleteKeywordRequest : public RpcServiceRequest
			{

			public:
				DeleteKeywordRequest();
				~DeleteKeywordRequest();

				std::string getKeywords()const;
				void setKeywords(const std::string& keywords);
				std::string getKeywordLibId()const;
				void setKeywordLibId(const std::string& keywordLibId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getIds()const;
				void setIds(const std::string& ids);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string keywords_;
				std::string keywordLibId_;
				std::string sourceIp_;
				std::string ids_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DELETEKEYWORDREQUEST_H_