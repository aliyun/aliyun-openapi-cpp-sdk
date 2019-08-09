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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCPFSFILESYSTEMSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCPFSFILESYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListCpfsFileSystemsRequest : public RpcServiceRequest
			{

			public:
				ListCpfsFileSystemsRequest();
				~ListCpfsFileSystemsRequest();

				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getFileSystemId()const;
				void setFileSystemId(const std::string& fileSystemId);

            private:
				int pageSize_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string fileSystemId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCPFSFILESYSTEMSREQUEST_H_