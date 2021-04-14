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

#ifndef ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT CreateAuditCallbackResult : public ServiceResult
			{
			public:


				CreateAuditCallbackResult();
				explicit CreateAuditCallbackResult(const std::string &payload);
				~CreateAuditCallbackResult();
				std::string getCryptType()const;
				std::string getModifiedTime()const;
				std::string getSeed()const;
				std::string getCreateTime()const;
				std::vector<std::string> getCallbackTypes()const;
				long getId()const;
				std::vector<std::string> getCallbackSuggestions()const;
				std::string getUrl()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cryptType_;
				std::string modifiedTime_;
				std::string seed_;
				std::string createTime_;
				std::vector<std::string> callbackTypes_;
				long id_;
				std::vector<std::string> callbackSuggestions_;
				std::string url_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKRESULT_H_