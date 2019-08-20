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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMLOCKSEATREQUEST_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMLOCKSEATREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/appmallsservice/AppMallsServiceExport.h>

namespace AlibabaCloud
{
	namespace AppMallsService
	{
		namespace Model
		{
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmLockSeatRequest : public RpcServiceRequest
			{

			public:
				TaobaoFilmLockSeatRequest();
				~TaobaoFilmLockSeatRequest();

				long getScheduleId()const;
				void setScheduleId(long scheduleId);
				std::string getSeatIds()const;
				void setSeatIds(const std::string& seatIds);
				std::string getSeatNames()const;
				void setSeatNames(const std::string& seatNames);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getExtUserId()const;
				void setExtUserId(const std::string& extUserId);
				std::string getParamsJson()const;
				void setParamsJson(const std::string& paramsJson);

            private:
				long scheduleId_;
				std::string seatIds_;
				std::string seatNames_;
				std::string mobile_;
				std::string extUserId_;
				std::string paramsJson_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMLOCKSEATREQUEST_H_