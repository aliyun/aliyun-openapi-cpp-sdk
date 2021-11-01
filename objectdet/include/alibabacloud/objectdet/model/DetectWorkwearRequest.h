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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTWORKWEARREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTWORKWEARREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/objectdet/ObjectdetExport.h>

namespace AlibabaCloud
{
	namespace Objectdet
	{
		namespace Model
		{
			class ALIBABACLOUD_OBJECTDET_EXPORT DetectWorkwearRequest : public RpcServiceRequest
			{

			public:
				DetectWorkwearRequest();
				~DetectWorkwearRequest();

				bool getFormatResultToJson()const;
				void setFormatResultToJson(bool formatResultToJson);
				std::string getOssFile()const;
				void setOssFile(const std::string& ossFile);
				std::string getRequestProxyBy()const;
				void setRequestProxyBy(const std::string& requestProxyBy);
				Struct getClothes()const;
				void setClothes(const Struct& clothes);
				std::vector<std::string> getLabels()const;
				void setLabels(const std::vector<std::string>& labels);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);

            private:
				bool formatResultToJson_;
				std::string ossFile_;
				std::string requestProxyBy_;
				Struct clothes_;
				std::vector<std::string> labels_;
				std::string imageUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTWORKWEARREQUEST_H_