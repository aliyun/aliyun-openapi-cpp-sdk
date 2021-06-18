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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEASSETREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEASSETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT CreateAssetRequest : public RpcServiceRequest
			{

			public:
				CreateAssetRequest();
				~CreateAssetRequest();

				std::string getInternetIp()const;
				void setInternetIp(const std::string& internetIp);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getOsName()const;
				void setOsName(const std::string& osName);
				std::string getOs()const;
				void setOs(const std::string& os);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getIntranetIp()const;
				void setIntranetIp(const std::string& intranetIp);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string internetIp_;
				std::string sourceIp_;
				std::string osName_;
				std::string os_;
				std::string instanceName_;
				std::string intranetIp_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEASSETREQUEST_H_