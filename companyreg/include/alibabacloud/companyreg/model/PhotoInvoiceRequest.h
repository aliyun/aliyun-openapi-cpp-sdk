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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_PHOTOINVOICEREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_PHOTOINVOICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT PhotoInvoiceRequest : public RpcServiceRequest
			{

			public:
				PhotoInvoiceRequest();
				~PhotoInvoiceRequest();

				int getUploadedNum()const;
				void setUploadedNum(int uploadedNum);
				std::string getFileUrlList()const;
				void setFileUrlList(const std::string& fileUrlList);
				long getUploadedStamp()const;
				void setUploadedStamp(long uploadedStamp);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getFileUrl()const;
				void setFileUrl(const std::string& fileUrl);
				bool getIsMobile()const;
				void setIsMobile(bool isMobile);

            private:
				int uploadedNum_;
				std::string fileUrlList_;
				long uploadedStamp_;
				std::string bizId_;
				std::string fileUrl_;
				bool isMobile_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_PHOTOINVOICEREQUEST_H_