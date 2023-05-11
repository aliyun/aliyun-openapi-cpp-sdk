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

#ifndef ALIBABACLOUD_ALINLP_MODEL_REQUESTDIALOGAPIREQUEST_H_
#define ALIBABACLOUD_ALINLP_MODEL_REQUESTDIALOGAPIREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alinlp/AlinlpExport.h>

namespace AlibabaCloud
{
	namespace Alinlp
	{
		namespace Model
		{
			class ALIBABACLOUD_ALINLP_EXPORT RequestDialogApiRequest : public RpcServiceRequest
			{

			public:
				RequestDialogApiRequest();
				~RequestDialogApiRequest();

				std::string getBotProfile()const;
				void setBotProfile(const std::string& botProfile);
				std::string getQuery()const;
				void setQuery(const std::string& query);
				std::string getUserProfile()const;
				void setUserProfile(const std::string& userProfile);
				std::string getHistory()const;
				void setHistory(const std::string& history);
				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);

            private:
				std::string botProfile_;
				std::string query_;
				std::string userProfile_;
				std::string history_;
				std::string serviceCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALINLP_MODEL_REQUESTDIALOGAPIREQUEST_H_