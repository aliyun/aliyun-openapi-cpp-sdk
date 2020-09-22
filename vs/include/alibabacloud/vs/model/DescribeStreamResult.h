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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeStreamResult : public ServiceResult
			{
			public:


				DescribeStreamResult();
				explicit DescribeStreamResult(const std::string &payload);
				~DescribeStreamResult();
				std::string getApp()const;
				std::string getStatus()const;
				std::string getCreatedTime()const;
				std::string getDeviceId()const;
				bool getEnabled()const;
				std::string getName()const;
				std::string getGroupId()const;
				std::string getPlayDomain()const;
				int getHeight()const;
				std::string getId()const;
				std::string getPushDomain()const;
				std::string getProtocol()const;
				int getWidth()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string app_;
				std::string status_;
				std::string createdTime_;
				std::string deviceId_;
				bool enabled_;
				std::string name_;
				std::string groupId_;
				std::string playDomain_;
				int height_;
				std::string id_;
				std::string pushDomain_;
				std::string protocol_;
				int width_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBESTREAMRESULT_H_