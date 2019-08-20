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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSREQUEST_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSREQUEST_H_

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
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmGetHotShowsRequest : public RpcServiceRequest
			{

			public:
				TaobaoFilmGetHotShowsRequest();
				~TaobaoFilmGetHotShowsRequest();

				long getCityCode()const;
				void setCityCode(long cityCode);
				std::string getParamsJson()const;
				void setParamsJson(const std::string& paramsJson);

            private:
				long cityCode_;
				std::string paramsJson_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSREQUEST_H_