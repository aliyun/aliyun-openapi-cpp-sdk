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

#ifndef ALIBABACLOUD_JARVIS_MODEL_DESCRIBEPUNISHLISTREQUEST_H_
#define ALIBABACLOUD_JARVIS_MODEL_DESCRIBEPUNISHLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/jarvis/JarvisExport.h>

namespace AlibabaCloud
{
	namespace Jarvis
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_EXPORT DescribePunishListRequest : public RpcServiceRequest
			{

			public:
				DescribePunishListRequest();
				~DescribePunishListRequest();

				std::string getSrcIP()const;
				void setSrcIP(const std::string& srcIP);
				std::string getSourceCode()const;
				void setSourceCode(const std::string& sourceCode);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPunishStatus()const;
				void setPunishStatus(const std::string& punishStatus);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getSrcUid()const;
				void setSrcUid(long srcUid);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);

            private:
				std::string srcIP_;
				std::string sourceCode_;
				std::string sourceIp_;
				int pageSize_;
				std::string punishStatus_;
				std::string lang_;
				long srcUid_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_MODEL_DESCRIBEPUNISHLISTREQUEST_H_