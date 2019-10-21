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

#ifndef ALIBABACLOUD_IQA_MODEL_UPLOADDOCUMENTREQUEST_H_
#define ALIBABACLOUD_IQA_MODEL_UPLOADDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT UploadDocumentRequest : public RpcServiceRequest
			{

			public:
				UploadDocumentRequest();
				~UploadDocumentRequest();

				std::string getDocumentData()const;
				void setDocumentData(const std::string& documentData);
				std::string getDocumentFileUrl()const;
				void setDocumentFileUrl(const std::string& documentFileUrl);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string documentData_;
				std::string documentFileUrl_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_UPLOADDOCUMENTREQUEST_H_