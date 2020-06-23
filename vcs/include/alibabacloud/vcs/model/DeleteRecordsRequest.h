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

#ifndef ALIBABACLOUD_VCS_MODEL_DELETERECORDSREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_DELETERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT DeleteRecordsRequest : public RpcServiceRequest
			{

			public:
				DeleteRecordsRequest();
				~DeleteRecordsRequest();

				std::string getAlgorithmType()const;
				void setAlgorithmType(const std::string& algorithmType);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getAttributeName()const;
				void setAttributeName(const std::string& attributeName);
				std::string getOperatorType()const;
				void setOperatorType(const std::string& operatorType);
				std::string getValue()const;
				void setValue(const std::string& value);

            private:
				std::string algorithmType_;
				std::string corpId_;
				std::string attributeName_;
				std::string operatorType_;
				std::string value_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_DELETERECORDSREQUEST_H_