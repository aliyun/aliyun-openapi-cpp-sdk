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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SHOPSETREDRESSREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SHOPSETREDRESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT ShopSetredressRequest : public RpcServiceRequest
			{

			public:
				ShopSetredressRequest();
				~ShopSetredressRequest();

				std::string getWorkday()const;
				void setWorkday(const std::string& workday);
				int getMinstoptime()const;
				void setMinstoptime(int minstoptime);
				std::string getHoliday()const;
				void setHoliday(const std::string& holiday);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getSid()const;
				void setSid(long sid);
				int getFilterstate()const;
				void setFilterstate(int filterstate);
				std::string getWnum()const;
				void setWnum(const std::string& wnum);
				int getState()const;
				void setState(int state);
				int getCrowdfixed()const;
				void setCrowdfixed(int crowdfixed);
				int getFilterclose()const;
				void setFilterclose(int filterclose);
				std::string getHnum()const;
				void setHnum(const std::string& hnum);
				int getClerk()const;
				void setClerk(int clerk);
				int getMaxstoptime()const;
				void setMaxstoptime(int maxstoptime);

            private:
				std::string workday_;
				int minstoptime_;
				std::string holiday_;
				std::string accessKeyId_;
				long sid_;
				int filterstate_;
				std::string wnum_;
				int state_;
				int crowdfixed_;
				int filterclose_;
				std::string hnum_;
				int clerk_;
				int maxstoptime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SHOPSETREDRESSREQUEST_H_