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

#ifndef ALIBABACLOUD_HIKNOENGINE_MODEL_TRANSLATETEXTREQUEST_H_
#define ALIBABACLOUD_HIKNOENGINE_MODEL_TRANSLATETEXTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hiknoengine/HiknoengineExport.h>

namespace AlibabaCloud
{
	namespace Hiknoengine
	{
		namespace Model
		{
			class ALIBABACLOUD_HIKNOENGINE_EXPORT TranslateTextRequest : public RpcServiceRequest
			{

			public:
				TranslateTextRequest();
				~TranslateTextRequest();

				std::string getFromLang()const;
				void setFromLang(const std::string& fromLang);
				std::string getToLang()const;
				void setToLang(const std::string& toLang);
				std::string getText()const;
				void setText(const std::string& text);

            private:
				std::string fromLang_;
				std::string toLang_;
				std::string text_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HIKNOENGINE_MODEL_TRANSLATETEXTREQUEST_H_