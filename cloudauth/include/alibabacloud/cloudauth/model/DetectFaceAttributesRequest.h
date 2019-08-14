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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DetectFaceAttributesRequest : public RpcServiceRequest
			{

			public:
				DetectFaceAttributesRequest();
				~DetectFaceAttributesRequest();

				int getMaxNumPhotosPerCategory()const;
				void setMaxNumPhotosPerCategory(int maxNumPhotosPerCategory);
				int getMaxFaceNum()const;
				void setMaxFaceNum(int maxFaceNum);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRetAttributes()const;
				void setRetAttributes(const std::string& retAttributes);
				std::string getMaterialValue()const;
				void setMaterialValue(const std::string& materialValue);
				bool getDontSaveDB()const;
				void setDontSaveDB(bool dontSaveDB);
				std::string getClientTag()const;
				void setClientTag(const std::string& clientTag);

            private:
				int maxNumPhotosPerCategory_;
				int maxFaceNum_;
				long resourceOwnerId_;
				std::string sourceIp_;
				std::string retAttributes_;
				std::string materialValue_;
				bool dontSaveDB_;
				std::string clientTag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESREQUEST_H_