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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_UPLOADNOTARYDATAREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_UPLOADNOTARYDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT UploadNotaryDataRequest : public RpcServiceRequest
			{

			public:
				UploadNotaryDataRequest();
				~UploadNotaryDataRequest();

				std::string getUploadContext()const;
				void setUploadContext(const std::string& uploadContext);
				std::string getBizOrderNo()const;
				void setBizOrderNo(const std::string& bizOrderNo);
				int getNotaryType()const;
				void setNotaryType(int notaryType);

            private:
				std::string uploadContext_;
				std::string bizOrderNo_;
				int notaryType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_UPLOADNOTARYDATAREQUEST_H_