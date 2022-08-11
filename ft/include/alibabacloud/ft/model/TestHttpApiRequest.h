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

#ifndef ALIBABACLOUD_FT_MODEL_TESTHTTPAPIREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_TESTHTTPAPIREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT TestHttpApiRequest : public RpcServiceRequest
			{

			public:
				TestHttpApiRequest();
				~TestHttpApiRequest();

				std::string getStringValue()const;
				void setStringValue(const std::string& stringValue);
				std::string getOtherParam()const;
				void setOtherParam(const std::string& otherParam);
				bool getBooleanParam()const;
				void setBooleanParam(bool booleanParam);
				std::string getDefaultValue()const;
				void setDefaultValue(const std::string& defaultValue);

            private:
				std::string stringValue_;
				std::string otherParam_;
				bool booleanParam_;
				std::string defaultValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_TESTHTTPAPIREQUEST_H_