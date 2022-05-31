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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEMATERIALSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEMATERIALSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeMaterialsRequest : public RpcServiceRequest
			{

			public:
				DescribeMaterialsRequest();
				~DescribeMaterialsRequest();

				std::string getSource()const;
				void setSource(const std::string& source);
				int getType()const;
				void setType(int type);
				std::string getMaterialId()const;
				void setMaterialId(const std::string& materialId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSize()const;
				void setSize(const std::string& size);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string source_;
				int type_;
				std::string materialId_;
				int pageNumber_;
				int pageSize_;
				std::string size_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEMATERIALSREQUEST_H_